@interface GKAnonymousPlayerInternal : GKSpecialPlayerInternal

+ (BOOL)supportsSecureCoding;

- (id)alias;
- (BOOL)isEqual:(id)a0;
- (id)playerID;
- (id)gamePlayerID;
- (BOOL)isAnonymousPlayer;
- (id)teamPlayerID;

@end
