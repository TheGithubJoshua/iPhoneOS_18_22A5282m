@class NSString, PHASESessionVolume;

@interface PHASEVolumeCommandForVolumeCategoryMode : PHASEVolumeCommand

@property (readonly, nonatomic) NSString *volumeCategory;
@property (readonly, nonatomic) NSString *volumeMode;
@property (readonly, nonatomic) PHASESessionVolume *volume;

- (void).cxx_destruct;
- (id)description;
- (id)initInternalWithCategory:(id)a0 mode:(id)a1 volume:(id)a2;
- (id)initWithCategory:(id)a0 mode:(id)a1 volume:(id)a2;

@end
