@class NSURL, NSDate, HKFHIRIdentifier;

@interface HDFHIRResourceLastSeenObject : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HKFHIRIdentifier *resourceIdentifier;
@property (readonly, copy, nonatomic) NSURL *sourceURL;
@property (readonly, copy, nonatomic) NSDate *lastSeenDate;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithResourceIdentifier:(id)a0 sourceURL:(id)a1 lastSeenDate:(id)a2;

@end
