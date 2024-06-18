@interface IIPaths : NSObject

+ (id)resourcesDirectory;
+ (id)suggestionsDirectoryFile:(id)a0;
+ (id)topDirectoryCreateIfNeeded:(BOOL)a0;
+ (id)suggestionsSubdirectory:(id)a0 creatingDirectoriesIfNeeded:(BOOL)a1;
+ (id)topDirectory;
+ (id)suggestionsSubdirectory:(id)a0;
+ (id)suggestionsDirectoryAfterCreatingIfNeeded:(BOOL)a0;
+ (id)suggestionsDirectory;
+ (id)suggestionsDirectoryFile:(id)a0 creatingSuggestionsDirectoryIfNeeded:(BOOL)a1;
+ (id)filename:(id)a0 createIfNeeded:(BOOL)a1;
+ (id)subdirectory:(id)a0 createIfNeeded:(BOOL)a1;
+ (id)topDirectoryWithName:(id)a0 createIfNeeded:(BOOL)a1;

@end
