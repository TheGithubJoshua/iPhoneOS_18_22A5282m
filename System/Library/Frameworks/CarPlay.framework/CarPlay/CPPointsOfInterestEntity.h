@class NSString, NSArray;

@interface CPPointsOfInterestEntity : CPEntity <NSSecureCoding, CPPointsOfInterestProviding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *pointsOfInterest;

- (id)initWithCoder:(id)a0;
- (id)objectForIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 pointsOfInterest:(id)a1;

@end
