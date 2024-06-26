@class BMDSL, NSString;

@interface BMDSLOrderedMerge : BMDSL

@property (readonly, nonatomic) BMDSL *a;
@property (readonly, nonatomic) BMDSL *b;
@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, copy, nonatomic) NSString *selectorName;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)bpsPublisher;
- (id)upstreams;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithA:(id)a0 b:(id)a1 key:(id)a2 selector:(SEL)a3;
- (id)initWithA:(id)a0 b:(id)a1 key:(id)a2 selector:(SEL)a3 name:(id)a4 version:(unsigned int)a5;

@end
