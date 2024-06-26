@class NSString;

@interface CPTripPreviewTextConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *startButtonTitle;
@property (readonly, copy, nonatomic) NSString *additionalRoutesButtonTitle;
@property (readonly, copy, nonatomic) NSString *overviewButtonTitle;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithStartButtonTitle:(id)a0 additionalRoutesButtonTitle:(id)a1 overviewButtonTitle:(id)a2;

@end
