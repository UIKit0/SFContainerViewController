/*
 * SFContainerViewController for cocos2d: http://merowing.info
 *
 * Copyright (c) 2012 Krzysztof Zabłocki
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 */
#import <UIKit/UIKit.h>

//! Controller used to contain multiple view controllers
@interface SFContainerViewController : UIViewController {
 @private
  NSArray *viewControllers;
}
@property (nonatomic, copy) NSArray *viewControllers;
@end

// This protocol added to prevent "Semantic issue: undeclared selector" compiler warning
// http://stackoverflow.com/questions/18570907/should-i-fix-xcode-5-semantic-issue-undeclared-selector
@protocol SFContainerViewControllerSelectors <NSObject>
- (void) sf_originalNavigationController;
- (void) sf_originalParentViewController;
- (void) sf_originalInterfaceOrientation;
- (void) sf_originalPresentModalViewController:(UIViewController *)controller animated:(BOOL)animated;
- (void) sf_originalDismissModalViewControllerAnimated:(BOOL)animated;
@end

