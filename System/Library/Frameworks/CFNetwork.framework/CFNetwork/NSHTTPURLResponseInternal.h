@interface NSHTTPURLResponseInternal : NSObject <NSCoding> {
    struct __SecTrust { } *peerTrust;
    BOOL isMixedReplace;
}

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)dealloc;

@end
