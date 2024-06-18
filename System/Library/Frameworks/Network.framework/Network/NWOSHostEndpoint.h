@class NSObject;
@protocol OS_dispatch_data;

@interface NWOSHostEndpoint : NWConcrete_nw_endpoint {
    char *hostname;
    unsigned short port;
    unsigned short priority;
    unsigned short weight;
    NSObject<OS_dispatch_data> *ech_config;
}

- (void)setWeight:(unsigned short)a0;
- (unsigned short)weight;
- (void)setPriority:(unsigned short)a0;
- (const char *)hostname;
- (id)echConfig;
- (BOOL)isEqualToEndpoint:(id)a0 matchFlags:(unsigned char)a1;
- (const char *)domainForPolicy;
- (unsigned short)port;
- (void).cxx_destruct;
- (id)copyEndpoint;
- (id)copyDictionary;
- (void)dealloc;
- (unsigned long long)getHash;
- (char *)createDescription:(BOOL)a0;
- (unsigned int)type;
- (void)setEchConfig:(id)a0;
- (unsigned short)priority;

@end
