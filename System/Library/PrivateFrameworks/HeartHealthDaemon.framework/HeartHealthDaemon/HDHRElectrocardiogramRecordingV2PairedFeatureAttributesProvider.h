@class HKPairedFeatureAttributes, NSString;
@protocol HDPairedFeatureAttributesProviding, HDPairedDeviceCapabilityProviding;

@interface HDHRElectrocardiogramRecordingV2PairedFeatureAttributesProvider : NSObject <HDPairedFeatureAttributesProviding> {
    id<HDPairedFeatureAttributesProviding> _attributesProvider;
    id<HDPairedDeviceCapabilityProviding> _pairedDeviceProvider;
}

@property (readonly, copy, nonatomic) HKPairedFeatureAttributes *currentPairedFeatureAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithPairedFeatureAttributesProvider:(id)a0 pairedDeviceCapabilityProvider:(id)a1;

@end
