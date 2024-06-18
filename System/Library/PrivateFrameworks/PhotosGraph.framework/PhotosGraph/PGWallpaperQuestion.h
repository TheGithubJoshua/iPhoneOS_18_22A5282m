@class NSDictionary, NSString;

@interface PGWallpaperQuestion : PGSurveyQuestion {
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
- (id)initWithAssetUUID:(id)a0 suggestionSubtype:(unsigned short)a1;
- (double)localFactoryScore;

@end
