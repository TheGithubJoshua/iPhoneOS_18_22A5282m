@class NSString, NSNumber, NSDate;

@interface ENUserAuthorization : NSObject <NSSecureCoding, NSCopying> {
    long long _authorization;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSDate *expirationDate;
@property (retain, nonatomic) NSDate *testDateToday;
@property (copy, nonatomic) NSNumber *didUserTravel;
@property (copy, nonatomic) NSNumber *isUserVaccinated;
@property (nonatomic) unsigned int reportType;
@property (copy, nonatomic) NSDate *symptomOnsetDate;
@property (copy, nonatomic) NSString *verificationCode;
@property (nonatomic) long long userAuthorization;
@property (readonly, nonatomic) double lastUpdatedTimestamp;
@property (readonly, nonatomic) long long expirationStatus;

- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setUserAuthorization:(long long)a0 withExpiration:(id)a1;

@end
