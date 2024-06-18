@class CPLRUDictionaryNode;

@interface CPLRUDictionary : NSObject {
    struct __CFDictionary { } *_dictionary;
    unsigned long long _maxCount;
    CPLRUDictionaryNode *_head;
    CPLRUDictionaryNode *_tail;
}

+ (id)dictionaryWithMaximumCapacity:(unsigned long long)a0;

- (void)setObject:(id)a0 forKey:(id)a1;
- (id)allKeys;
- (id)allKeysInLRUOrder;
- (id)objectForKey:(id)a0;
- (unsigned long long)linkedListCount;
- (id)initWithMaximumCapacity:(unsigned long long)a0;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;
- (void)_removeNodeFromLinkedList:(id)a0;
- (id)description;
- (void)dealloc;
- (id)allValuesInLRUOrder;
- (void)_addNodeToFront:(id)a0;
- (id)objectForKeyWithoutAffectingLRU:(id)a0;
- (void)_removeNode:(id)a0;
- (unsigned long long)count;
- (void)_moveNodeToFront:(id)a0;

@end
