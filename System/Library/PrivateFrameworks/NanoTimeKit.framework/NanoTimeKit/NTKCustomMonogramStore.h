@class NPSManager;

@interface NTKCustomMonogramStore : NSObject {
    NPSManager *_npsManager;
}

+ (id)sharedInstance;

- (void)_notifyClientsOfChange;
- (id)init;
- (id)customMonogram;
- (void)setCustomMonogram:(id)a0;
- (void).cxx_destruct;
- (id)_customMonogramFromPrefs;
- (void)dealloc;

@end
