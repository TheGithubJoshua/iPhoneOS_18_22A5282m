@class AVContentKeySpecifier;

@interface AVContentKey : NSObject {
    struct OpaqueFigCPECryptor { } *_cryptor;
}

@property (readonly) AVContentKeySpecifier *contentKeySpecifier;

+ (id)contentKeyWithSpecifier:(id)a0 andCryptor:(struct OpaqueFigCPECryptor { } *)a1;

- (struct OpaqueFigCPECryptor { } *)cryptor;
- (void)dealloc;
- (id)initWithSpecifier:(id)a0 andCryptor:(struct OpaqueFigCPECryptor { } *)a1;

@end
