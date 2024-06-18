@class Protocol;

@interface _ConformsToProtocolCachedKey : NSObject {
    id _object;
    Protocol *_protocol;
}

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithObject:(id)a0 protocol:(id)a1;

@end
