@class NSString, NSObject;

@interface _PUWallpaperEditingLook : NSObject <PUWallpaperEditingLook>

@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long pu_timeAppearance;
@property (readonly, nonatomic) NSString *pu_timeFontIdentifier;
@property (readonly, nonatomic) NSObject *pu_timeFontColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 displayName:(id)a1;
- (id)initWithDisplayName:(id)a0;
- (id)initWithIdentifier:(id)a0 displayName:(id)a1 pu_timeAppearance:(unsigned long long)a2 pu_timeFontIdentifier:(id)a3 pu_timeFontColor:(id)a4;

@end
