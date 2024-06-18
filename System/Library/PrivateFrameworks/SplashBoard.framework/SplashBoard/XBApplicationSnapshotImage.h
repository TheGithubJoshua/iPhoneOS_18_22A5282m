@class XBApplicationSnapshot;

@interface XBApplicationSnapshotImage : UIImage {
    XBApplicationSnapshot *_snapshot;
}

@property (readonly, nonatomic) long long interfaceOrientation;

- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (id)initWithSnapshot:(id)a0 interfaceOrientation:(long long)a1;

@end
