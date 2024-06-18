@class NSString, GEOPDAmenityValue;

@interface GEOAmenityItem : NSObject {
    GEOPDAmenityValue *_amenityValue;
}

@property (readonly, nonatomic) NSString *amenityTitle;
@property (readonly, nonatomic) NSString *symbolImageName;
@property (readonly, nonatomic) int amenityType;
@property (readonly, nonatomic, getter=isApplePayAmenity) BOOL applePayAmenity;
@property (readonly, nonatomic, getter=isAmenityPresent) BOOL amenityPresent;

+ (id)amenityItemsFromPDAmenityItems:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (id)initWithAmenityValue:(id)a0;

@end
