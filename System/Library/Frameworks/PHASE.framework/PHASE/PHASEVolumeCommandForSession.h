@class PHASESessionVolume;

@interface PHASEVolumeCommandForSession : PHASEVolumeCommand

@property (readonly, nonatomic) unsigned int audioSessionToken;
@property (readonly, nonatomic) PHASESessionVolume *volume;

- (void).cxx_destruct;
- (id)description;
- (id)initWithSessionToken:(unsigned int)a0;
- (id)initInternalWithSessionToken:(unsigned int)a0 volume:(id)a1;
- (id)initWithSessionToken:(unsigned int)a0 volume:(id)a1;

@end
