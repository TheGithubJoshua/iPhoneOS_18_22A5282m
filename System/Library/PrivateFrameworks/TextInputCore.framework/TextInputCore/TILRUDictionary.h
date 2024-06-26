@class TILRUDictionaryNode;

@interface TILRUDictionary : NSObject {
    struct __CFDictionary { } *_dictionary;
    unsigned long long _maxCount;
    TILRUDictionaryNode *_head;
    TILRUDictionaryNode *_tail;
}

+ (id)dictionaryWithMaximumCapacity:(unsigned long long)a0;

- (void)setObject:(id)a0 forKey:(id)a1;
- (id)allKeys;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)allKeysInLRUOrder;
- (id)objectForKey:(id)a0;
- (unsigned long long)linkedListCount;
- (id)initWithMaximumCapacity:(unsigned long long)a0;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;
- (void)_removeNodeFromLinkedList:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)objectForKeyedSubscript:(id)a0;
- (void)dealloc;
- (id)allValuesInLRUOrder;
- (void)_addNodeToFront:(id)a0;
- (id)objectForKeyWithoutAffectingLRU:(id)a0;
- (void)_removeNode:(id)a0;
- (unsigned long long)count;
- (void)_moveNodeToFront:(id)a0;

@end
