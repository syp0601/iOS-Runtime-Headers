/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
 */

@class NSMutableDictionary;



@interface _AXTableViewInternal : NSObject 
{
    NSMutableDictionary *_children;
    NSMutableDictionary *_indexMap;
    NSMutableDictionary *_sectionHeaders;
    NSMutableDictionary *_sectionFooters;
    BOOL _reusableCellsEnabled;
    NSInteger _accessibleElementCount;
}

@property(readonly) NSMutableDictionary *sectionFooters;
@property(readonly) NSMutableDictionary *sectionHeaders;
@property BOOL reusableCellsEnabled;
@property(readonly) NSMutableDictionary *indexMap;
@property(readonly) NSMutableDictionary *children;
@property NSInteger accessibleElementCount;


- (id)init;
- (void)dealloc;
- (id)children;
- (BOOL)reusableCellsEnabled;
- (void)setReusableCellsEnabled:(BOOL)arg1;
- (id)sectionHeaders;
- (id)sectionFooters;
- (NSInteger)accessibleElementCount;
- (void)setAccessibleElementCount:(NSInteger)arg1;
- (id)indexMap;

@end