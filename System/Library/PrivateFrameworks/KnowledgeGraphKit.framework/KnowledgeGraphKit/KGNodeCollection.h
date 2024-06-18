@interface KGNodeCollection : KGElementCollection

- (void)enumerateNodesSortedByStringPropertyForName:(id)a0 usingBlock:(id /* block */)a1;
- (void)enumerateNodesUsingBlock:(id /* block */)a0;
- (void)enumerateElementsWithBatchSize:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)enumerateNodesSortedByIntegerPropertyForName:(id)a0 usingBlock:(id /* block */)a1;
- (id)allObjects;
- (void)enumerateOrderedNodes:(id)a0 withBatchSize:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (void)enumeratePropertyValuesForKey:(id)a0 withBlock:(id /* block */)a1;
- (void)enumerateNodesSortedByFloatPropertyForName:(id)a0 usingBlock:(id /* block */)a1;

@end
