@class NSString, PRSServerPosterPath;

@interface PRSWallpaperObserverSnapshotUpdate : NSObject <BSXPCSecureCoding>

@property (retain, nonatomic) PRSServerPosterPath *path;
@property (retain, nonatomic) NSString *snapshotType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)initWithBSXPCCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithPath:(id)a0 snapshotType:(id)a1;

@end
