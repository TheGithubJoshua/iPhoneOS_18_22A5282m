@class HKSampleIteratorQueryCursor;

@interface _HKSampleIteratorQueryServerConfiguration : HKQueryServerConfiguration

@property (copy, nonatomic) HKSampleIteratorQueryCursor *queryCursor;
@property (nonatomic) unsigned long long limit;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
