@interface ICNoteListSortUtilities : NSObject

+ (void)clearCache;
+ (void)setCurrentNoteListSortTypeByTag:(long long)a0;
+ (id)sortDescriptorsForCurrentTypeIncludingPinnedNotes:(BOOL)a0;
+ (void)setCurrentNoteListSortType:(long long)a0;
+ (id)legacySortDescriptorsForType:(long long)a0;
+ (id)legacySortDescriptorsForType:(long long)a0 ascending:(BOOL)a1;
+ (BOOL)isMenuItemCurrentSortTypeForTag:(long long)a0;
+ (id)dateForCurrentSortTypeForNote:(id)a0;
+ (id)sortDescriptorsForType:(long long)a0 ascending:(BOOL)a1;
+ (id)descriptionForNoteListSortType:(long long)a0;
+ (long long)sortTypeForFolderNoteOrder:(long long)a0;
+ (id)sortDescriptorsForCurrentType;
+ (long long)tagForSortType:(long long)a0;
+ (long long)folderSortOrderForNoteListSortType:(long long)a0;
+ (id)sortDescriptorsForType:(long long)a0;
+ (id)sortDescriptorsForPinnedNotes;
+ (id)sortDescriptorsForCurrentTypeIncludingPinnedNotes:(BOOL)a0 folderNoteSortType:(id)a1;
+ (id)dateForCurrentSortTypeAccessibilityStringForNote:(id)a0;
+ (long long)currentNoteListSortType;
+ (long long)sortTypeForTag:(long long)a0;

@end
