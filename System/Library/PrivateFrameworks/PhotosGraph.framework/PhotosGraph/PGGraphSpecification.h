@interface PGGraphSpecification : MAGraphSpecification

- (id)init;
- (id)nodeClassByDomainAndLabel;
- (void)enumerateEdgeClassesUsingBlock:(id /* block */)a0;
- (id)nodeClassByDomain;
- (id)edgeClassByDomain;
- (Class)nodeClassWithLabel:(id)a0 domain:(unsigned short)a1;
- (id)edgeClassByDomainAndLabel;
- (void)enumerateNodeClassesUsingBlock:(id /* block */)a0;
- (Class)edgeClassWithLabel:(id)a0 domain:(unsigned short)a1;

@end
