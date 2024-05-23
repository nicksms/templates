/**
 * Author: nicksms
 * Date: 2024-01-18
 * License: CC0
 * Source: SnapDragon64
 * Description: Tweakable intersection of line segments
 * Time: O(1)
 * Status: tested on several WF problems
 */
#pragma once

int is(const pt &a, const pt &b, const pt &c, const pt &d, int *sides = NULL, pt *p = NULL) {
  db cp1 = cross(c-a, b-a), cp2 = cross(d-a, b-a);
  db dp1 = dot(c-a, b-a), dp2 = dot(d-a, b-a);
  if (sides) *sides = (cp1 < -EPS || cp2 < -EPS) + 2*(cp1 > EPS || cp2 > EPS);
  if (cp1 < -EPS && cp2 < -EPS || cp1 > EPS && cp2 > EPS) return 0;
  if (abs(cp1) < EPS && abs(cp2) < EPS) return 2;
  *p = (c*cp2 - d*cp1)/(cp2-cp1);
  return 1;
}