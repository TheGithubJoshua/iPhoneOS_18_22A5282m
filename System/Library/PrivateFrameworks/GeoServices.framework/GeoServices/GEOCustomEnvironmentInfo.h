@class NSString, NSMapTable;

@interface GEOCustomEnvironmentInfo : GEOEnvironmentInfo {
    NSMapTable *_overrideURLs;
    NSString *_uuid;
}

- (void)delete;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)save;
- (BOOL)isActive;
- (void)updateWithURLs:(id)a0;
- (id)initWithName:(id)a0 displayName:(id)a1 dictionaryRepresentation:(id)a2;
- (void)makeActive;
- (id)overrideURLs;

@end
