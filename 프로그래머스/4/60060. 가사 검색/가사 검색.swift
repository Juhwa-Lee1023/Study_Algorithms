import Foundation

class Node {
    var cnt: Int = 0
    var childs: [Character: Node] = [:]
}

class Trie {
    let root = Node()
    
    func insert(_ str: String) {
        var cur = root
        cur.cnt += 1
        for ch in str {
            if cur.childs[ch] == nil {
                cur.childs[ch] = Node()
            }
            cur = cur.childs[ch]!
            cur.cnt += 1
        }
    }
    
    func prefixCount(_ str: String) -> Int {
        if str.isEmpty {
            return root.cnt
        }
        var cur = root
        for ch in str {
            guard let next = cur.childs[ch] else {
                return 0
            }
            cur = next
        }
        return cur.cnt
    }
}

func solution(_ words:[String], _ queries:[String]) -> [Int] {
    var lenTrie = [Int: (Trie, Trie)]()
    
    for w in words {
        let len = w.count
        if lenTrie[len] == nil {
            lenTrie[len] = (Trie(), Trie())
        }
        let (prefixT, suffixT) = lenTrie[len]!
        prefixT.insert(w)
        let reversed = String(w.reversed())
        suffixT.insert(reversed)
    }
    
    var cache = [String: Int]()
    var result = [Int]()
    result.reserveCapacity(queries.count)
    
    for q in queries {
        if let c = cache[q] {
            result.append(c)
            continue
        }
        
        let len = q.count
        
        guard let (prefixT, suffixT) = lenTrie[len] else {
            cache[q] = 0
            result.append(0)
            continue
        }
        
        if q.first == "?" && q.last == "?" {
            let total = prefixT.root.cnt
            cache[q] = total
            result.append(total)
            continue
        }
        
        if q.last == "?" {
            let prefix = q.trimmingCharacters(in: ["?"])
            let c = prefixT.prefixCount(prefix)
            cache[q] = c
            result.append(c)
        } else if q.first == "?" {
            let suffix = q.trimmingCharacters(in: ["?"])
            let rev = String(suffix.reversed())
            let c = suffixT.prefixCount(rev)
            cache[q] = c
            result.append(c)
            
        }
    }
    return result
}
