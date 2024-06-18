@class NSData, NSString;

@interface MCMClientCodeSignIndex : NSObject <NSCopying> {
    NSData *_cdhash;
    NSString *_identifier;
}

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCDHash:(id)a0 identifier:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToClientCodeSignIndex:(id)a0;

@end
