@class NSObject;
@protocol OS_dispatch_data;

@interface NWOSCustomEndpoint : NWConcrete_nw_endpoint {
    NSObject<OS_dispatch_data> *data;
    id /* block */ resolver_block;
    unsigned int type;
}

- (BOOL)isEqualToEndpoint:(id)a0 matchFlags:(unsigned char)a1;
- (void).cxx_destruct;
- (id)copyEndpoint;
- (id)copyDictionary;
- (unsigned long long)getHash;
- (char *)createDescription:(BOOL)a0;
- (unsigned int)type;

@end
