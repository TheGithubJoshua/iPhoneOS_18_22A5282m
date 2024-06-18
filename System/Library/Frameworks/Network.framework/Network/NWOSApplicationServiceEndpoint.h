@interface NWOSApplicationServiceEndpoint : NWConcrete_nw_endpoint {
    char *apple_id;
    char *application_service;
    unsigned char service_identifier[16];
}

- (BOOL)isEqualToEndpoint:(id)a0 matchFlags:(unsigned char)a1;
- (id)copyEndpoint;
- (id)copyDictionary;
- (void)dealloc;
- (char *)createDescription:(BOOL)a0;
- (unsigned int)type;

@end
