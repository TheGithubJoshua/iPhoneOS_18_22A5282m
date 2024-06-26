@interface CatacombComponent : NSObject <NSCopying> {
    struct { unsigned int userID; struct { unsigned int type; unsigned char uuid[16]; } group; } _component;
}

@property (readonly, nonatomic) struct { unsigned int x0; struct { unsigned int x0; unsigned char x1[16]; } x1; } *component;
@property (readonly, nonatomic) unsigned int userID;

+ (id)masterComponent;
+ (id)componentForUserID:(unsigned int)a0;

- (BOOL)isUserComponent;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isMasterComponent;
- (BOOL)isEqualToComponent:(id)a0;

@end
