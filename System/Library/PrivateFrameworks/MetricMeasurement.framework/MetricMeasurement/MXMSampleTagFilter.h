@class NSSet;

@interface MXMSampleTagFilter : MXMSampleTag <NSCopying, NSSecureCoding> {
    BOOL _allowDescendents;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL finite;
@property (readonly, nonatomic, getter=finite) BOOL isFinite;
@property (copy, nonatomic) NSSet *tagPermutations;

- (id)initWithCoder:(id)a0;
- (id)copy;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTag:(id)a0 allowDescendents:(BOOL)a1;
- (BOOL)matchesSampleWithTag:(id)a0;

@end
