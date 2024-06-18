@class NSString, NSDictionary, PHPerson;

@interface PGNamingQuestion : PGSurveyQuestion {
    unsigned short _state;
    NSDictionary *_additionalInfo;
    NSString *_entityIdentifier;
    double _localFactoryScore;
}

@property (readonly, nonatomic) NSString *contactIdentifier;
@property (readonly, nonatomic) PHPerson *person;

+ (id)questionForPerson:(id)a0;

- (void)remove;
- (unsigned short)entityType;
- (unsigned short)displayType;
- (id)entityIdentifier;
- (unsigned short)state;
- (id)additionalInfo;
- (void).cxx_destruct;
- (unsigned short)type;
- (id)_additionalInfoFromContactIdentifier:(id)a0;
- (id)_personForContactSuggestion;
- (id)initWithConfirmedPerson:(id)a0 contactIdentifier:(id)a1 localFactoryScore:(double)a2;
- (id)initWithPerson:(id)a0 contactIdentifier:(id)a1 localFactoryScore:(double)a2;
- (void)legacyPersist;
- (void)legacyRemove;
- (double)localFactoryScore;
- (void)persistWithCreationDate:(id)a0 questionVersion:(short)a1;

@end
