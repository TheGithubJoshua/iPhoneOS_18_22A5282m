@class AVMediaSelectionOption, NSString;

@interface TVPAudioOption : NSObject

@property (retain, nonatomic) AVMediaSelectionOption *avMediaSelectionOption;
@property (copy, nonatomic) NSString *localizedDisplayString;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *languageCodeFromLocale;
@property (copy, nonatomic) NSString *languageCodeBCP47;
@property (retain, nonatomic) id propertyListRepresentation;
@property (nonatomic) int trackID;
@property (copy, nonatomic) NSString *savedLocaleLanguageCode;
@property (readonly, nonatomic) BOOL hasAudioDescriptions;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)dealloc;
- (void)_currentLocaleDidChange:(id)a0;
- (id)initWithPropertyListRepresentation:(id)a0;
- (BOOL)hasMediaCharacteristic:(id)a0;
- (id)initWithOption:(id)a0;
- (id)initWithSavedTrackID:(int)a0 savedLocaleLanguageCode:(id)a1;

@end
