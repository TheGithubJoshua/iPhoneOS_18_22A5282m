@class NSDictionary, NSString;

@interface PGAlbumClassificationQuestion : PGSurveyQuestion {
    unsigned short _state;
    NSDictionary *_additionalInfo;
    NSString *_entityIdentifier;
    double _localFactoryScore;
}

- (unsigned short)entityType;
- (unsigned short)displayType;
- (id)entityIdentifier;
- (unsigned short)state;
- (id)additionalInfo;
- (void).cxx_destruct;
- (unsigned short)type;
- (id)initWithAlbumUUID:(id)a0 localFactoryScore:(double)a1;
- (double)localFactoryScore;

@end
