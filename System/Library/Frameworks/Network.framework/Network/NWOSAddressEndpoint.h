@class NSObject;
@protocol OS_dispatch_data;

@interface NWOSAddressEndpoint : NWConcrete_nw_endpoint {
    struct sockaddr_storage { unsigned char ss_len; unsigned char ss_family; char __ss_pad1[6]; long long __ss_align; char __ss_pad2[112]; } address;
    struct ether_addr { unsigned char octet[6]; } ethernet_address;
    NSObject<OS_dispatch_data> *ech_config;
    char *hostname;
    int original_fd;
    unsigned short priority;
    unsigned char calculated_hostname : 1;
}

- (void)setPriority:(unsigned short)a0;
- (const char *)hostname;
- (id)echConfig;
- (BOOL)isEqualToEndpoint:(id)a0 matchFlags:(unsigned char)a1;
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
