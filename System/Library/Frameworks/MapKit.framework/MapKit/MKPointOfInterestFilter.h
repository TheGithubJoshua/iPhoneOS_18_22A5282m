@class NSSet;

@interface MKPointOfInterestFilter : NSObject <NSSecureCoding, NSCopying> {
    NSSet *_includedCategories;
    NSSet *_excludedCategories;
}

@property (class, readonly, nonatomic) MKPointOfInterestFilter *filterIncludingAllCategories;
@property (class, readonly, nonatomic) MKPointOfInterestFilter *filterExcludingAllCategories;
@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)init;
- (BOOL)excludesCategory:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToPointOfInterestFilter:(id)a0;
- (BOOL)_excludesAllCategories;
- (void).cxx_destruct;
- (id)initExcludingCategories:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initIncludingCategories:(id)a0;
- (BOOL)_includesAllCategories;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initIncludingCategories:(id)a0 excludingCategories:(id)a1;
- (BOOL)includesCategory:(id)a0;
- (id)_geoPOICategoryFilter;

@end
