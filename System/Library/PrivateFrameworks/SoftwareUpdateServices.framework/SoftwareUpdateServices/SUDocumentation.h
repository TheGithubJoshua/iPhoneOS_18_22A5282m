@class NSString, SUCoreDocumentation;

@interface SUDocumentation : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SUCoreDocumentation *coreDocumentation;
@property (retain, nonatomic) NSString *primaryLanguage;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)iconImage;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)humanReadableUpdateName;
- (id)licenseAgreement;
- (id)releaseNotes;
- (id)releaseNotesSummary;
- (id)slaVersion;
- (id)licenseAgreementFileName;
- (id)notificationBodyString;
- (id)notificationTitleString;
- (id)recommendedUpdateAlertBodyString;
- (id)recommendedUpdateTitleString;
- (id)releaseNotesFileName;
- (id)releaseNotesSummaryFileName;
- (void)_resetIfNecessary;
- (BOOL)hasAnyDocumentation;
- (id)initWithSUCoreDocumentation:(id)a0;

@end
