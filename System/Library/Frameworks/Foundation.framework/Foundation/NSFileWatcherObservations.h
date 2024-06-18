@class NSString;

@interface NSFileWatcherObservations : NSObject {
    BOOL _attributesChanged;
    BOOL _contentsChanged;
    BOOL _deleted;
    BOOL _moved;
    NSString *_lastObservedPath;
    BOOL _didResetPath;
    NSString *_path;
}

- (void)addDeletion;
- (id)initWithPath:(id)a0;
- (void)addContentsChange;
- (id)description;
- (void)addAttributeChange;
- (void)addAnnouncedMoveToPath:(id)a0;
- (void)notifyObserver:(id /* block */)a0;
- (void)dealloc;
- (void)addDetectedMoveToPath:(id)a0;

@end
