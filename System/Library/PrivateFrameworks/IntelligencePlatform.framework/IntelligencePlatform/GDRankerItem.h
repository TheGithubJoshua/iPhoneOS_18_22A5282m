@class GDEntityIdentifier;

@interface GDRankerItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) GDEntityIdentifier *entityID;
@property (readonly, nonatomic) double confidence;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithEntityID:(id)a0 confidence:(double)a1;

@end
