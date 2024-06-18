@interface GKSpecialPlayerInternal : GKPlayerInternal

+ (BOOL)supportsSecureCoding;

- (id)alias;
- (void)setAlias:(id)a0;
- (void)setPlayerID:(id)a0;
- (id)playerID;
- (BOOL)isLoaded;
- (id)photos;
- (void)setPhotos:(id)a0;
- (id)compositeName;
- (id)gamePlayerID;
- (void)setGamePlayerID:(id)a0;
- (void)setTeamPlayerID:(id)a0;
- (id)teamPlayerID;

@end
