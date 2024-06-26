@class FBSDisplayIdentity, NSString, FBSDisplayMode, NSSet, CADisplay;

@interface FBSDisplayConfiguration : NSObject <BSDescriptionProviding, BSXPCCoding, NSCopying, NSSecureCoding> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _nativeBounds;
    FBSDisplayMode *_preferredMode;
    NSSet *_otherModes;
    CADisplay *_immutableCADisplay;
    CADisplay *_caDisplay;
    int _pid;
    BOOL _noEqual_comparable;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned int seed;
@property (readonly, nonatomic) long long tags;
@property (readonly, nonatomic, getter=isUIKitMainLike) BOOL UIKitMainLike;
@property (readonly, copy, nonatomic) FBSDisplayConfiguration *originatingConfiguration;
@property (readonly, copy, nonatomic) FBSDisplayIdentity *identity;
@property (readonly, nonatomic, getter=isMainDisplay) BOOL mainDisplay;
@property (readonly, nonatomic, getter=isExternal) BOOL external;
@property (readonly, nonatomic, getter=isCarDisplay) BOOL carDisplay;
@property (readonly, nonatomic, getter=isCarInstrumentsDisplay) BOOL carInstrumentsDisplay;
@property (readonly, copy, nonatomic) NSString *hardwareIdentifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *deviceName;
@property (readonly, copy, nonatomic) FBSDisplayMode *currentMode;
@property (readonly, copy, nonatomic) FBSDisplayMode *preferredMode;
@property (readonly, copy, nonatomic) NSSet *availableModes;
@property (readonly, nonatomic, getter=isCloningSupported) BOOL cloningSupported;
@property (readonly, nonatomic, getter=isOverscanned) BOOL overscanned;
@property (readonly, nonatomic) long long overscanCompensation;
@property (readonly, nonatomic) struct CGSize { double width; double height; } safeOverscanRatio;
@property (readonly, nonatomic) double nativeOrientation;
@property (readonly, nonatomic) struct CGSize { double width; double height; } pixelSize;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } renderingCenter;
@property (readonly, nonatomic) double refreshRate;
@property (readonly, nonatomic) long long colorGamut;
@property (readonly, nonatomic) double latency;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (BOOL)supportsExtendedColor;
- (id)init;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (double)orientation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })referenceBounds;
- (unsigned int)displayID;
- (id)initWithCADisplay:(id)a0;
- (long long)_nativeRotation;
- (id)uniqueID;
- (BOOL)isMainRootDisplay;
- (id)copyForSecureRendering;
- (id)copyWithOverrideMode:(id)a0;
- (BOOL)isConnected;
- (BOOL)isHiddenDisplay;
- (id)succinctDescription;
- (id)copyWithUniqueIdentifier:(id)a0;
- (struct CGPoint { double x0; double x1; })nativeCenter;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)copyWithOverrideMode:(id)a0 pixelSize:(struct CGSize { double x0; double x1; })a1 nativeBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (BOOL)wantsConnectionDebouncing;
- (id)copyWithOverrideBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithImmutableDisplay:(id)a0 originalDisplay:(id)a1 assertIfInvalid:(BOOL)a2;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (BOOL)expectsSecureRendering;
- (id)caDisplay;
- (id)laterConfiguration:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_nativeBounds;
- (id)initWithCADisplay:(id)a0 isMainDisplay:(BOOL)a1;
- (id)_nameForDisplayType;
- (id)uniqueIdentifier;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (long long)type;
- (id)immutableCADisplay;
- (id)CADisplay;
- (id)_initWithIdentity:(id)a0 hardwareIdentifier:(id)a1 name:(id)a2 deviceName:(id)a3 seed:(unsigned int)a4 comparable:(BOOL)a5 tags:(long long)a6 currentMode:(id)a7 preferredMode:(id)a8 otherModes:(id)a9 cloningSupported:(BOOL)a10 overscanned:(BOOL)a11 overscanCompensation:(long long)a12 safeOverscanRatio:(struct CGSize { double x0; double x1; })a13 pixelSize:(struct CGSize { double x0; double x1; })a14 nativeBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a15 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a16 latency:(double)a17 originatingConfiguration:(id)a18 validityCheck:(long long)a19;
- (id)initWithXPCDictionary:(id)a0;

@end
