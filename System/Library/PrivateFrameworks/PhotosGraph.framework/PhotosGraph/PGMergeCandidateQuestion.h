@class NSString, NSDictionary, PHPerson;

@interface PGMergeCandidateQuestion : PGSurveyQuestion {
    unsigned short _type;
    unsigned short _displayType;
    unsigned short _state;
    unsigned short _entityType;
    NSString *_entityIdentifier;
    double _score;
    NSDictionary *_additionalInfo;
}

@property (readonly, nonatomic) PHPerson *person;

+ (id)questionForPerson:(id)a0;

- (void)remove;
- (unsigned short)entityType;
- (unsigned short)displayType;
- (double)score;
- (void)setScore:(double)a0;
- (id)entityIdentifier;
- (unsigned short)state;
- (unsigned long long)hash;
- (id)additionalInfo;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned short)type;
- (id)initWithPerson:(id)a0 score:(double)a1;
- (BOOL)isEqualToQuestion:(id)a0;
- (void)persistWithCreationDate:(id)a0 questionVersion:(short)a1;

@end
