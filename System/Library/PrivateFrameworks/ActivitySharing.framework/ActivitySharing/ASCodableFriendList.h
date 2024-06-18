@class NSMutableArray;

@interface ASCodableFriendList : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *friends;

+ (Class)friendType;

- (void)mergeFrom:(id)a0;
- (unsigned long long)friendsCount;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)addFriend:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearFriends;
- (id)friendAtIndex:(unsigned long long)a0;

@end
