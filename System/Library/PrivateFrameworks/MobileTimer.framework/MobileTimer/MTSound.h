@class NSString, NSNumber;

@interface MTSound : NSObject <MTDictionarySerializable, NAEquatable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long soundType;
@property (readonly, nonatomic) NSString *toneIdentifier;
@property (readonly, nonatomic) NSNumber *mediaItemIdentifier;
@property (readonly, nonatomic) NSString *vibrationIdentifier;
@property (readonly, nonatomic) NSNumber *soundVolume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setDefaultSound:(id)a0 forCategory:(unsigned long long)a1;
+ (id)_loadDefaultTimerSound;
+ (void)_saveDefaultAlarmSound:(id)a0;
+ (void)_saveDefaultTimerSound:(id)a0;
+ (long long)_alertTypeForCategory:(unsigned long long)a0;
+ (id)songSoundWithIdentifier:(id)a0 vibrationIdentifier:(id)a1 volume:(id)a2;
+ (id)descriptionForCategory:(unsigned long long)a0;
+ (id)defaultSoundForCategory:(unsigned long long)a0;
+ (id)toneSoundWithIdentifier:(id)a0 vibrationIdentifer:(id)a1 volume:(id)a2;
+ (id)_loadDefaultAlarmSound;

- (id)initWithCoder:(id)a0;
- (id)initWithSound:(id)a0 usingVolume:(id)a1;
- (BOOL)interruptAudio;
- (id)soundByUpdatingVolume:(id)a0;
- (id)soundByUpdatingVibrationIdentifier:(id)a0;
- (id)unSound;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)previewWithCompletionHandler:(id /* block */)a0;
- (void)updatePreview:(id)a0;
- (id)initWithMediaItemIdentifier:(id)a0 vibrationIdentifier:(id)a1 volume:(id)a2;
- (BOOL)isSilent;
- (BOOL)isEqualToSound:(id)a0;
- (id)unSoundForCategory:(unsigned long long)a0;
- (id)initWithToneIdentifier:(id)a0 vibrationIdentifer:(id)a1 volume:(id)a2;

@end
