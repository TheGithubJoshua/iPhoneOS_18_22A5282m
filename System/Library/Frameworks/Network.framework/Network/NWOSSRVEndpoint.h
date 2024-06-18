@interface NWOSSRVEndpoint : NWConcrete_nw_endpoint {
    char *name;
}

- (BOOL)isEqualToEndpoint:(id)a0 matchFlags:(unsigned char)a1;
- (const char *)domainForPolicy;
- (id)copyEndpoint;
- (id)copyDictionary;
- (void)dealloc;
- (unsigned long long)getHash;
- (char *)createDescription:(BOOL)a0;
- (unsigned int)type;

@end
