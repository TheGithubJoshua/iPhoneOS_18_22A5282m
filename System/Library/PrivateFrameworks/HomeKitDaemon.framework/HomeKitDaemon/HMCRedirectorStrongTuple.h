@class HMCRedirectorTuple;

@interface HMCRedirectorStrongTuple : HMFObject {
    HMCRedirectorTuple *_tuple;
    id _target;
    SEL _selector;
}

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)attributeDescriptions;

@end
