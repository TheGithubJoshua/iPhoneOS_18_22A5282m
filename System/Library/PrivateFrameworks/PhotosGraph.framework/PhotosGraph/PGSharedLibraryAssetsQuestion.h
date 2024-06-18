@class NSString;

@interface PGSharedLibraryAssetsQuestion : PGSurveyQuestion {
    unsigned short _state;
    NSString *_entityIdentifier;
}

- (unsigned short)entityType;
- (unsigned short)displayType;
- (id)entityIdentifier;
- (unsigned short)state;
- (void).cxx_destruct;
- (unsigned short)type;
- (id)initWithAssetUUID:(id)a0;
- (BOOL)isEquivalentToPersistedQuestion:(id)a0;
- (BOOL)isEquivalentToQuestion:(id)a0;

@end
