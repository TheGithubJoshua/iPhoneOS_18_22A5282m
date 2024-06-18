@class NSArray, NSDictionary, NSDate;

@interface WLKUpNextDelta : NSObject <WLKMergeableCoding> {
    NSDictionary *_backingDictionary;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, copy, nonatomic) NSArray *items;
@property (readonly, copy, nonatomic) NSArray *additions;
@property (readonly, copy, nonatomic) NSArray *removals;

+ (id)useWidgetImagesIfAvailable:(id)a0;

- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isExpired;
- (id)_deltaByMergingItemsFromDelta:(id)a0;
- (id)dataByMergingWith:(id)a0;

@end
